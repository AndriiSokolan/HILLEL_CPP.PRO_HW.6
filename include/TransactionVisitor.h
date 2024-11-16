#pragma once
class Deposit;
class Withdrawal;
class Transfer;
class BillPayment;

class TransactionVisitor {
public:
    virtual void visit(Deposit& deposit) = 0;
    virtual void visit(Withdrawal& withdrawal) = 0;
    virtual void visit(Transfer& transfer) = 0;
    virtual void visit(BillPayment& billPayment) = 0;
    virtual ~TransactionVisitor() = default;
};
