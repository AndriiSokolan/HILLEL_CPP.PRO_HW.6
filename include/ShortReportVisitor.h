#pragma once
#include "TransactionVisitor.h"
#include "Logger.h"
#include <iostream>

class ShortReportVisitor final : public TransactionVisitor {
public:
    ShortReportVisitor() : logger("short_report.log") {}

    void visit(Deposit& deposit) override;
    void visit(Withdrawal& withdrawal) override;
    void visit(Transfer& transfer) override;
    void visit(BillPayment& billPayment) override;

private:
    Logger logger;
};
