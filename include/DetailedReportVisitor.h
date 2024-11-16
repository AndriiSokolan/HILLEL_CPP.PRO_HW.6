#pragma once
#include "TransactionVisitor.h"
#include "Logger.h"
#include <iostream>

class DetailedReportVisitor final : public TransactionVisitor {
public:
    DetailedReportVisitor() : logger("detailed_report.log") {}

    void visit(Deposit& deposit) override;
    void visit(Withdrawal& withdrawal) override;
    void visit(Transfer& transfer) override;
    void visit(BillPayment& billPayment) override;

private:
    Logger logger;
};
