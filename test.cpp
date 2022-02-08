#define CATCH_CONFIG_MAIN 
#include "catch.hpp"

std::vector<int> AddN(std::vector<int>vec, int n){

    for(int i = 0; i < vec.size(); i++) {
        vec[i] = vec[i] + n;
    }
    return vec;
}

TEST_CASE( "vector are computed", "[addN]" ) {
    std::vector<int> vec = {1,2,3};
    std::vector<int> vec1 = {2,3,4};
    std::vector<int> vec2 = {3,4,5};
    std::vector<int> vec3 = {4,5,6};
    std::vector<int> vec4 = {5,6,7};
    REQUIRE( AddN(vec,1) ==  vec1);
    REQUIRE( AddN(vec1,1) ==  vec2);
    REQUIRE( AddN(vec2,1) ==  vec3);
    REQUIRE( AddN(vec3,1) ==  vec4);
}