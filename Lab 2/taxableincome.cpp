#include<simplecpp>

//Program to find tax to be paid.

main_program{
    int taxableIncome, tax, amount;
    float totalTax=0;

    cin >> taxableIncome;
    amount=taxableIncome;

    if(taxableIncome<=250000){
        tax=0;
    }

    else if(taxableIncome>250000 && taxableIncome<=500000){
        tax=5;
        totalTax=((amount-250000)*tax)/100.0;
    }

    else if(taxableIncome>500000 && taxableIncome<=750000) {
        tax=10;
        totalTax=12500+((amount-500000)*tax)/100.0;
    }

    else if(taxableIncome>750000 && taxableIncome<=1000000){
        tax=15;
        totalTax=12500+25000+((amount-750000)*tax)/100.0;
    }

    else if(taxableIncome>1000000 && taxableIncome<=1250000){
        tax=20;
        totalTax=12500+25000+37500+((amount-1000000)*tax)/100.0;
    }

    else if(taxableIncome>1250000 && taxableIncome<=1500000){
        tax=25;
        totalTax=12500+25000+37500+50000+((amount-1250000)*tax)/100.0;
    }

    else if(taxableIncome>1500000){
        tax=30;
        totalTax=12500+25000+37500+50000+62500+((amount-1500000)*tax)/100.0;
    }

    cout << fixed;
    cout.precision(2);
    cout << totalTax;
}
