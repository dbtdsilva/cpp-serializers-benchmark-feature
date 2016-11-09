// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_TEST_H_
#define FLATBUFFERS_GENERATED_TEST_H_

#include "flatbuffers/flatbuffers.h"

struct Record;

struct RecordMissing;

struct RecordNewField;

struct RecordRename;

struct RecordTypeInheritance;

struct Record FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS = 4,
    VT_STRINGS = 6
  };
  const flatbuffers::Vector<int64_t> *ids() const { return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_IDS); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *strings() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRINGS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS) &&
           verifier.Verify(ids()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STRINGS) &&
           verifier.Verify(strings()) &&
           verifier.VerifyVectorOfStrings(strings()) &&
           verifier.EndTable();
  }
};

struct RecordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids(flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids) { fbb_.AddOffset(Record::VT_IDS, ids); }
  void add_strings(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings) { fbb_.AddOffset(Record::VT_STRINGS, strings); }
  RecordBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordBuilder &operator=(const RecordBuilder &);
  flatbuffers::Offset<Record> Finish() {
    auto o = flatbuffers::Offset<Record>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Record> CreateRecord(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings = 0) {
  RecordBuilder builder_(_fbb);
  builder_.add_strings(strings);
  builder_.add_ids(ids);
  return builder_.Finish();
}

inline flatbuffers::Offset<Record> CreateRecordDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int64_t> *ids = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *strings = nullptr) {
  return CreateRecord(_fbb, ids ? _fbb.CreateVector<int64_t>(*ids) : 0, strings ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*strings) : 0);
}

struct RecordMissing FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS = 4
  };
  const flatbuffers::Vector<int64_t> *ids() const { return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_IDS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS) &&
           verifier.Verify(ids()) &&
           verifier.EndTable();
  }
};

struct RecordMissingBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids(flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids) { fbb_.AddOffset(RecordMissing::VT_IDS, ids); }
  RecordMissingBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordMissingBuilder &operator=(const RecordMissingBuilder &);
  flatbuffers::Offset<RecordMissing> Finish() {
    auto o = flatbuffers::Offset<RecordMissing>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<RecordMissing> CreateRecordMissing(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids = 0) {
  RecordMissingBuilder builder_(_fbb);
  builder_.add_ids(ids);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordMissing> CreateRecordMissingDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int64_t> *ids = nullptr) {
  return CreateRecordMissing(_fbb, ids ? _fbb.CreateVector<int64_t>(*ids) : 0);
}

struct RecordNewField FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS = 4,
    VT_STRINGS = 6,
    VT_ID = 8
  };
  const flatbuffers::Vector<int64_t> *ids() const { return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_IDS); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *strings() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRINGS); }
  int32_t id() const { return GetField<int32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS) &&
           verifier.Verify(ids()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STRINGS) &&
           verifier.Verify(strings()) &&
           verifier.VerifyVectorOfStrings(strings()) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct RecordNewFieldBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids(flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids) { fbb_.AddOffset(RecordNewField::VT_IDS, ids); }
  void add_strings(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings) { fbb_.AddOffset(RecordNewField::VT_STRINGS, strings); }
  void add_id(int32_t id) { fbb_.AddElement<int32_t>(RecordNewField::VT_ID, id, 0); }
  RecordNewFieldBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordNewFieldBuilder &operator=(const RecordNewFieldBuilder &);
  flatbuffers::Offset<RecordNewField> Finish() {
    auto o = flatbuffers::Offset<RecordNewField>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<RecordNewField> CreateRecordNewField(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings = 0,
    int32_t id = 0) {
  RecordNewFieldBuilder builder_(_fbb);
  builder_.add_id(id);
  builder_.add_strings(strings);
  builder_.add_ids(ids);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordNewField> CreateRecordNewFieldDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int64_t> *ids = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *strings = nullptr,
    int32_t id = 0) {
  return CreateRecordNewField(_fbb, ids ? _fbb.CreateVector<int64_t>(*ids) : 0, strings ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*strings) : 0, id);
}

struct RecordRename FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS_REM = 4,
    VT_STRINGS_REM = 6
  };
  const flatbuffers::Vector<int64_t> *ids_rem() const { return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_IDS_REM); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *strings_rem() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRINGS_REM); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS_REM) &&
           verifier.Verify(ids_rem()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STRINGS_REM) &&
           verifier.Verify(strings_rem()) &&
           verifier.VerifyVectorOfStrings(strings_rem()) &&
           verifier.EndTable();
  }
};

struct RecordRenameBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids_rem(flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids_rem) { fbb_.AddOffset(RecordRename::VT_IDS_REM, ids_rem); }
  void add_strings_rem(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings_rem) { fbb_.AddOffset(RecordRename::VT_STRINGS_REM, strings_rem); }
  RecordRenameBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordRenameBuilder &operator=(const RecordRenameBuilder &);
  flatbuffers::Offset<RecordRename> Finish() {
    auto o = flatbuffers::Offset<RecordRename>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<RecordRename> CreateRecordRename(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids_rem = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings_rem = 0) {
  RecordRenameBuilder builder_(_fbb);
  builder_.add_strings_rem(strings_rem);
  builder_.add_ids_rem(ids_rem);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordRename> CreateRecordRenameDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int64_t> *ids_rem = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *strings_rem = nullptr) {
  return CreateRecordRename(_fbb, ids_rem ? _fbb.CreateVector<int64_t>(*ids_rem) : 0, strings_rem ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*strings_rem) : 0);
}

struct RecordTypeInheritance FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS = 4,
    VT_STRINGS = 6
  };
  const flatbuffers::Vector<double> *ids() const { return GetPointer<const flatbuffers::Vector<double> *>(VT_IDS); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *strings() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRINGS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS) &&
           verifier.Verify(ids()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STRINGS) &&
           verifier.Verify(strings()) &&
           verifier.VerifyVectorOfStrings(strings()) &&
           verifier.EndTable();
  }
};

struct RecordTypeInheritanceBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids(flatbuffers::Offset<flatbuffers::Vector<double>> ids) { fbb_.AddOffset(RecordTypeInheritance::VT_IDS, ids); }
  void add_strings(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings) { fbb_.AddOffset(RecordTypeInheritance::VT_STRINGS, strings); }
  RecordTypeInheritanceBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordTypeInheritanceBuilder &operator=(const RecordTypeInheritanceBuilder &);
  flatbuffers::Offset<RecordTypeInheritance> Finish() {
    auto o = flatbuffers::Offset<RecordTypeInheritance>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<RecordTypeInheritance> CreateRecordTypeInheritance(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<double>> ids = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings = 0) {
  RecordTypeInheritanceBuilder builder_(_fbb);
  builder_.add_strings(strings);
  builder_.add_ids(ids);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordTypeInheritance> CreateRecordTypeInheritanceDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<double> *ids = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *strings = nullptr) {
  return CreateRecordTypeInheritance(_fbb, ids ? _fbb.CreateVector<double>(*ids) : 0, strings ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*strings) : 0);
}

#endif  // FLATBUFFERS_GENERATED_TEST_H_
