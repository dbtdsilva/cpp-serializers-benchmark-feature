#ifndef CPP_SERIALIZERS_CAPNPROTO_H
#define CPP_SERIALIZERS_CAPNPROTO_H

#include "../feature-test-obj.h"

class CapNProtoTest : public FeatureTestObject
{
public:
    CapNProtoTest();

    bool check_missing_field();
    bool check_new_field();
    bool check_types_inheritance();
    bool check_field_names();
};


#endif //CPP_SERIALIZERS_CAPNPROTO_H
