/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;


void GeneratedStructMetadata<::cpp2::ComplexUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ComplexUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ComplexUnion = res.first->second;
  module_ComplexUnion.name = "module.ComplexUnion";
  module_ComplexUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_intValue_1;
  module_ComplexUnion_intValue_1.id = 1;
  module_ComplexUnion_intValue_1.name = "intValue";
  module_ComplexUnion_intValue_1.is_optional = false;
  auto module_ComplexUnion_intValue_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::I64);
  module_ComplexUnion_intValue_1_type->initialize(module_ComplexUnion_intValue_1.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_intValue_1));
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_stringValue_5;
  module_ComplexUnion_stringValue_5.id = 5;
  module_ComplexUnion_stringValue_5.name = "stringValue";
  module_ComplexUnion_stringValue_5.is_optional = false;
  auto module_ComplexUnion_stringValue_5_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_ComplexUnion_stringValue_5_type->initialize(module_ComplexUnion_stringValue_5.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_stringValue_5));
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_intListValue_2;
  module_ComplexUnion_intListValue_2.id = 2;
  module_ComplexUnion_intListValue_2.name = "intListValue";
  module_ComplexUnion_intListValue_2.is_optional = false;
  auto module_ComplexUnion_intListValue_2_type = std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_ComplexUnion_intListValue_2_type->initialize(module_ComplexUnion_intListValue_2.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_intListValue_2));
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_stringListValue_3;
  module_ComplexUnion_stringListValue_3.id = 3;
  module_ComplexUnion_stringListValue_3.name = "stringListValue";
  module_ComplexUnion_stringListValue_3.is_optional = false;
  auto module_ComplexUnion_stringListValue_3_type = std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING));
  module_ComplexUnion_stringListValue_3_type->initialize(module_ComplexUnion_stringListValue_3.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_stringListValue_3));
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_typedefValue_9;
  module_ComplexUnion_typedefValue_9.id = 9;
  module_ComplexUnion_typedefValue_9.name = "typedefValue";
  module_ComplexUnion_typedefValue_9.is_optional = false;
  auto module_ComplexUnion_typedefValue_9_type = std::make_unique<Typedef>("module.containerTypedef", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I16), std::make_unique<Primitive>(ThriftPrimitiveType::STRING)));
  module_ComplexUnion_typedefValue_9_type->initialize(module_ComplexUnion_typedefValue_9.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_typedefValue_9));
  ::apache::thrift::metadata::ThriftField module_ComplexUnion_stringRef_14;
  module_ComplexUnion_stringRef_14.id = 14;
  module_ComplexUnion_stringRef_14.name = "stringRef";
  module_ComplexUnion_stringRef_14.is_optional = false;
  auto module_ComplexUnion_stringRef_14_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_ComplexUnion_stringRef_14_type->initialize(module_ComplexUnion_stringRef_14.type);
  module_ComplexUnion.fields.push_back(std::move(module_ComplexUnion_stringRef_14));
}
void GeneratedStructMetadata<::cpp2::ListUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ListUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ListUnion = res.first->second;
  module_ListUnion.name = "module.ListUnion";
  module_ListUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_ListUnion_intListValue_2;
  module_ListUnion_intListValue_2.id = 2;
  module_ListUnion_intListValue_2.name = "intListValue";
  module_ListUnion_intListValue_2.is_optional = false;
  auto module_ListUnion_intListValue_2_type = std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_ListUnion_intListValue_2_type->initialize(module_ListUnion_intListValue_2.type);
  module_ListUnion.fields.push_back(std::move(module_ListUnion_intListValue_2));
  ::apache::thrift::metadata::ThriftField module_ListUnion_stringListValue_3;
  module_ListUnion_stringListValue_3.id = 3;
  module_ListUnion_stringListValue_3.name = "stringListValue";
  module_ListUnion_stringListValue_3.is_optional = false;
  auto module_ListUnion_stringListValue_3_type = std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING));
  module_ListUnion_stringListValue_3_type->initialize(module_ListUnion_stringListValue_3.type);
  module_ListUnion.fields.push_back(std::move(module_ListUnion_stringListValue_3));
}
void GeneratedStructMetadata<::cpp2::DataUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.DataUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_DataUnion = res.first->second;
  module_DataUnion.name = "module.DataUnion";
  module_DataUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_DataUnion_binaryData_1;
  module_DataUnion_binaryData_1.id = 1;
  module_DataUnion_binaryData_1.name = "binaryData";
  module_DataUnion_binaryData_1.is_optional = false;
  auto module_DataUnion_binaryData_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::BINARY);
  module_DataUnion_binaryData_1_type->initialize(module_DataUnion_binaryData_1.type);
  module_DataUnion.fields.push_back(std::move(module_DataUnion_binaryData_1));
  ::apache::thrift::metadata::ThriftField module_DataUnion_stringData_2;
  module_DataUnion_stringData_2.id = 2;
  module_DataUnion_stringData_2.name = "stringData";
  module_DataUnion_stringData_2.is_optional = false;
  auto module_DataUnion_stringData_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_DataUnion_stringData_2_type->initialize(module_DataUnion_stringData_2.type);
  module_DataUnion.fields.push_back(std::move(module_DataUnion_stringData_2));
}
void GeneratedStructMetadata<::cpp2::Val>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Val", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Val = res.first->second;
  module_Val.name = "module.Val";
  module_Val.is_union = false;
  ::apache::thrift::metadata::ThriftField module_Val_strVal_1;
  module_Val_strVal_1.id = 1;
  module_Val_strVal_1.name = "strVal";
  module_Val_strVal_1.is_optional = false;
  auto module_Val_strVal_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Val_strVal_1_type->initialize(module_Val_strVal_1.type);
  module_Val.fields.push_back(std::move(module_Val_strVal_1));
  ::apache::thrift::metadata::ThriftField module_Val_intVal_2;
  module_Val_intVal_2.id = 2;
  module_Val_intVal_2.name = "intVal";
  module_Val_intVal_2.is_optional = false;
  auto module_Val_intVal_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::I32);
  module_Val_intVal_2_type->initialize(module_Val_intVal_2.type);
  module_Val.fields.push_back(std::move(module_Val_intVal_2));
  ::apache::thrift::metadata::ThriftField module_Val_typedefValue_9;
  module_Val_typedefValue_9.id = 9;
  module_Val_typedefValue_9.name = "typedefValue";
  module_Val_typedefValue_9.is_optional = false;
  auto module_Val_typedefValue_9_type = std::make_unique<Typedef>("module.containerTypedef", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I16), std::make_unique<Primitive>(ThriftPrimitiveType::STRING)));
  module_Val_typedefValue_9_type->initialize(module_Val_typedefValue_9.type);
  module_Val.fields.push_back(std::move(module_Val_typedefValue_9));
}
void GeneratedStructMetadata<::cpp2::ValUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ValUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ValUnion = res.first->second;
  module_ValUnion.name = "module.ValUnion";
  module_ValUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_ValUnion_v1_1;
  module_ValUnion_v1_1.id = 1;
  module_ValUnion_v1_1.name = "v1";
  module_ValUnion_v1_1.is_optional = false;
  auto module_ValUnion_v1_1_type = std::make_unique<Struct< ::cpp2::Val>>("module.Val", metadata);
  module_ValUnion_v1_1_type->initialize(module_ValUnion_v1_1.type);
  module_ValUnion.fields.push_back(std::move(module_ValUnion_v1_1));
  ::apache::thrift::metadata::ThriftField module_ValUnion_v2_2;
  module_ValUnion_v2_2.id = 2;
  module_ValUnion_v2_2.name = "v2";
  module_ValUnion_v2_2.is_optional = false;
  auto module_ValUnion_v2_2_type = std::make_unique<Struct< ::cpp2::Val>>("module.Val", metadata);
  module_ValUnion_v2_2_type->initialize(module_ValUnion_v2_2.type);
  module_ValUnion.fields.push_back(std::move(module_ValUnion_v2_2));
}
void GeneratedStructMetadata<::cpp2::VirtualComplexUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.VirtualComplexUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_VirtualComplexUnion = res.first->second;
  module_VirtualComplexUnion.name = "module.VirtualComplexUnion";
  module_VirtualComplexUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_VirtualComplexUnion_thingOne_1;
  module_VirtualComplexUnion_thingOne_1.id = 1;
  module_VirtualComplexUnion_thingOne_1.name = "thingOne";
  module_VirtualComplexUnion_thingOne_1.is_optional = false;
  auto module_VirtualComplexUnion_thingOne_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_VirtualComplexUnion_thingOne_1_type->initialize(module_VirtualComplexUnion_thingOne_1.type);
  module_VirtualComplexUnion.fields.push_back(std::move(module_VirtualComplexUnion_thingOne_1));
  ::apache::thrift::metadata::ThriftField module_VirtualComplexUnion_thingTwo_2;
  module_VirtualComplexUnion_thingTwo_2.id = 2;
  module_VirtualComplexUnion_thingTwo_2.name = "thingTwo";
  module_VirtualComplexUnion_thingTwo_2.is_optional = false;
  auto module_VirtualComplexUnion_thingTwo_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_VirtualComplexUnion_thingTwo_2_type->initialize(module_VirtualComplexUnion_thingTwo_2.type);
  module_VirtualComplexUnion.fields.push_back(std::move(module_VirtualComplexUnion_thingTwo_2));
}
void GeneratedStructMetadata<::cpp2::NonCopyableStruct>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NonCopyableStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NonCopyableStruct = res.first->second;
  module_NonCopyableStruct.name = "module.NonCopyableStruct";
  module_NonCopyableStruct.is_union = false;
  ::apache::thrift::metadata::ThriftField module_NonCopyableStruct_num_1;
  module_NonCopyableStruct_num_1.id = 1;
  module_NonCopyableStruct_num_1.name = "num";
  module_NonCopyableStruct_num_1.is_optional = false;
  auto module_NonCopyableStruct_num_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::I64);
  module_NonCopyableStruct_num_1_type->initialize(module_NonCopyableStruct_num_1.type);
  module_NonCopyableStruct.fields.push_back(std::move(module_NonCopyableStruct_num_1));
}
void GeneratedStructMetadata<::cpp2::NonCopyableUnion>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NonCopyableUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NonCopyableUnion = res.first->second;
  module_NonCopyableUnion.name = "module.NonCopyableUnion";
  module_NonCopyableUnion.is_union = true;
  ::apache::thrift::metadata::ThriftField module_NonCopyableUnion_s_1;
  module_NonCopyableUnion_s_1.id = 1;
  module_NonCopyableUnion_s_1.name = "s";
  module_NonCopyableUnion_s_1.is_optional = false;
  auto module_NonCopyableUnion_s_1_type = std::make_unique<Struct< ::cpp2::NonCopyableStruct>>("module.NonCopyableStruct", metadata);
  module_NonCopyableUnion_s_1_type->initialize(module_NonCopyableUnion_s_1.type);
  module_NonCopyableUnion.fields.push_back(std::move(module_NonCopyableUnion_s_1));
}

} // apache::thrift::detail::metadata