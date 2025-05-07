import java.sql.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Connection conn = Database.connect();
             Scanner scanner = new Scanner(System.in)) {

            Statement stmt = conn.createStatement();
            stmt.execute("CREATE TABLE IF NOT EXISTS cliente (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(100))");
            stmt.execute("CREATE TABLE IF NOT EXISTS conta (id INT AUTO_INCREMENT PRIMARY KEY, cliente_id INT, saldo DOUBLE, FOREIGN KEY(cliente_id) REFERENCES cliente(id))");

            System.out.println("1 - Cadastrar Cliente");
            System.out.println("2 - Criar Conta para Cliente");
            System.out.println("3 - Listar Clientes e Contas");

            int opcao = scanner.nextInt();
            scanner.nextLine();

            if (opcao == 1) {
                System.out.print("Nome do cliente: ");
                String nome = scanner.nextLine();
                PreparedStatement ps = conn.prepareStatement("INSERT INTO cliente (nome) VALUES (?)");
                ps.setString(1, nome);
                ps.executeUpdate();
                System.out.println("Cliente cadastrado!");
            } else if (opcao == 2) {
                System.out.print("ID do cliente: ");
                int clienteId = scanner.nextInt();
                System.out.print("Saldo inicial: ");
                double saldo = scanner.nextDouble();
                PreparedStatement ps = conn.prepareStatement("INSERT INTO conta (cliente_id, saldo) VALUES (?, ?)");
                ps.setInt(1, clienteId);
                ps.setDouble(2, saldo);
                ps.executeUpdate();
                System.out.println("Conta criada!");
            } else if (opcao == 3) {
                ResultSet clientes = stmt.executeQuery("SELECT * FROM cliente");
                while (clientes.next()) {
                    int id = clientes.getInt("id");
                    String nome = clientes.getString("nome");
                    System.out.println("Cliente: " + id + " - " + nome);

                    PreparedStatement contas = conn.prepareStatement("SELECT * FROM conta WHERE cliente_id = ?");
                    contas.setInt(1, id);
                    ResultSet rsContas = contas.executeQuery();
                    while (rsContas.next()) {
                        System.out.println("   Conta ID: " + rsContas.getInt("id") + ", Saldo: R$" + rsContas.getDouble("saldo"));
                    }
                }
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}