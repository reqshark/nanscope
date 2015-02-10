#include "node.h"
#include "node_buffer.h"
#include "nan.h"

#define EXPORT_METHOD(C, S) C->Set(NanNew(# S), NanNew<FunctionTemplate>(S)->GetFunction());

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::Number;

static int64_t c = 0;

NAN_METHOD(hello){
  NanScope();
  //args.As<Number>()->IntegerValue();
  //args.GetReturnValue().Set(c++);
  NanReturnValue(NanNew<Number>(c++));
}

void Init(Handle<Object> exports) {
  NanScope();
  EXPORT_METHOD(exports, hello);
}

NODE_MODULE(binding, Init)
