#ifndef CPP_SERIALIZERS_THRIFT_H
#define CPP_SERIALIZERS_THRIFT_H

#include "../feature-test-obj.h"

class ThriftTest : public FeatureTestObject
{
public:
    ThriftTest();
    // This function checks if a protocol is still able to handle missing fields
    bool check_missing_field();
    // This function checks if a protocol is able to ignore a new field in the schema
    bool check_new_field();
    // This function checks for types change (e.g. int should be able to change to float)
    bool check_types_inheritance();
    // This function checks for if a field is able to change it's name or not
    bool check_field_names();
};

#endif //CPP_SERIALIZERS_THRIFT_H