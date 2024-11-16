#pragma once
#include <iostream>

class TransactionVisitor;

class Transaction {
public:
    virtual void accept(TransactionVisitor& visitor) = 0;
    virtual ~Transaction() noexcept = default;
};

class Deposit final : public Transaction {
public:
    void accept(TransactionVisitor& visitor) override;
};

class Withdrawal final : public Transaction {
public:
    void accept(TransactionVisitor& visitor) override;
};

class Transfer final : public Transaction {
public:
    void accept(TransactionVisitor& visitor) override;
};

class BillPayment final : public Transaction {
public:
    void accept(TransactionVisitor& visitor) override;
};
