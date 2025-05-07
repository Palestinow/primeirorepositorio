public class Conta {
    private int id;
    private int clienteId;
    private double saldo;

    public Conta(int id, int clienteId, double saldo) {
        this.id = id;
        this.clienteId = clienteId;
        this.saldo = saldo;
    }

    public int getId() {
        return id;
    }

    public int getClienteId() {
        return clienteId;
    }

    public double getSaldo() {
        return saldo;
    }
}