//
// Created by Amey on 11-05-2019.
//

#include <iostream>
#include "Student.h"

void customClass(){
    Student st;
    st.set_age(23);
    st.set_standard(1);
    st.set_first_name("Amey");
    st.set_last_name("Meher");
    cout<<st.to_string()<<endl;
}