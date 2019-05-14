//
// Created by Amey on 13-05-2019.
//

#ifndef SAMPLEPROJECT_DATE_H
#define SAMPLEPROJECT_DATE_H

class Date {

    using UI = unsigned int;

    private:
        UI day;
        UI month;
        UI year;

    public:

        Date(UI day, UI month, UI year){

            if(month >=1 && month <=12)
                this->month = month;
            else
                throw "Month invalid";

            if(month )
            this->day = day;

            this->year = year;
        }

        UI getDay() const {
            return day;
        }

        void setDay(UI day) {
            Date::day = day;
        }

        UI getMonth() const {
            return month;
        }

        void setMonth(UI month) {
            Date::month = month;
        }

        UI getYear() const {
            return year;
        }

        void setYear(UI year) {
            Date::year = year;
        }


};


#endif //SAMPLEPROJECT_DATE_H
