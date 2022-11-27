#include<bits/stdc++.h>
using namespace std;


float predictSales(float na_sales, float eu_sales, float jp_sales, int y_o_r, float critic_score, float critic_count, float user_score, float user_count, int name_label_encoded,
int platform_label_encoded, int genre_label_encoded, int publisher_label_encoded, int developer_label_encoded, int rating_label_encoded) {
    
float sales = na_sales*1.21246615e+00 + eu_sales*1.27239986e+00 + jp_sales*1.01782715e+00 + y_o_r*7.39257828e-03 + critic_score*-2.09047055e-03 + 
critic_count*-1.32004290e-03 + user_score*1.44209920e-02 + user_count*-5.14113224e-05 + name_label_encoded*1.34193493e-06 + platform_label_encoded*-4.91536572e-05 + 
genre_label_encoded*2.06664444e-03 + 1.43997955e-05*publisher_label_encoded + -3.73816418e-07*developer_label_encoded + 3.29501776e-03*rating_label_encoded 
- 14.837569889544385;
return sales;
}