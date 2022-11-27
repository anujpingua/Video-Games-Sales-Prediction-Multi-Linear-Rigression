#include<bits/stdc++.h>
using namespace std;

float predictSales(float na_sales, float eu_sales, float jp_sales, int y_o_r, float critic_score, float critic_count, float user_score, float user_count, int name_label_encoded,
int platform_label_encoded, int genre_label_encoded, int publisher_label_encoded, int developer_label_encoded, int rating_label_encoded);

int main() {
    
    float na_sales=0.0;
    float eu_sales=0.0;
    float jp_sales=0.0;
    int y_o_r=0.0;
    float critic_score=0.0;
    float critic_count=0.0;
    float user_score=0.0;
    float user_count=0.0;
    int name_label_encoded=0;
    int platform_label_encoded=0;
    int genre_label_encoded=0;
    int publisher_label_encoded=0;
    int developer_label_encoded=0;
    int rating_label_encoded=0;

    cout<<"Predicted Sales - "<<predictSales(na_sales,eu_sales,jp_sales,y_o_r, critic_score, critic_count, user_score, user_count, name_label_encoded, platform_label_encoded,
    genre_label_encoded, publisher_label_encoded, developer_label_encoded, rating_label_encoded);
}