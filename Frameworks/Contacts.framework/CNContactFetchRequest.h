/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding> {
    bool  _allowsBatching;
    bool  _alwaysUnifyLabeledValues;
    long long  _batchSize;
    long long  _contactBatchCount;
    long long  _decoderBatchSize;
    bool  _disallowsEncodedFetch;
    NSNumber * _keyboardState;
    NSArray * _keysToFetch;
    bool  _mutableObjects;
    bool  _onlyMainStore;
    NSPredicate * _predicate;
    bool  _rankSort;
    unsigned long long  _serialNumber;
    bool  _shouldFailIfAccountNotYetSynced;
    unsigned long long  _signpostId;
    long long  _sortOrder;
    bool  _unifyResults;
}

@property (nonatomic) bool allowsBatching;
@property (nonatomic) bool alwaysUnifyLabeledValues;
@property (nonatomic) long long batchSize;
@property (nonatomic) long long contactBatchCount;
@property (nonatomic) long long decoderBatchSize;
@property (nonatomic) bool disallowsEncodedFetch;
@property (nonatomic, retain) NSNumber *keyboardState;
@property (nonatomic, copy) NSArray *keysToFetch;
@property (nonatomic) bool mutableObjects;
@property (nonatomic) bool onlyMainStore;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) bool rankSort;
@property (readonly) unsigned long long serialNumber;
@property (nonatomic) bool shouldFailIfAccountNotYetSynced;
@property (readonly) unsigned long long signpostId;
@property (nonatomic) long long sortOrder;
@property (nonatomic) bool unifyResults;

+ (unsigned long long)makeSerialNumber;
+ (unsigned long long)makeSignpostId;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (bool)allowsBatching;
- (bool)alwaysUnifyLabeledValues;
- (long long)batchSize;
- (long long)contactBatchCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decoderBatchSize;
- (id)description;
- (bool)disallowsEncodedFetch;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeysToFetch:(id)arg1;
- (id)keyboardState;
- (id)keysToFetch;
- (bool)mutableObjects;
- (bool)onlyMainStore;
- (id)predicate;
- (bool)rankSort;
- (bool)requiresMeContactAuthorization;
- (unsigned long long)serialNumber;
- (void)setAllowsBatching:(bool)arg1;
- (void)setAlwaysUnifyLabeledValues:(bool)arg1;
- (void)setBatchSize:(long long)arg1;
- (void)setContactBatchCount:(long long)arg1;
- (void)setDecoderBatchSize:(long long)arg1;
- (void)setDisallowsEncodedFetch:(bool)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setMutableObjects:(bool)arg1;
- (void)setOnlyMainStore:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRankSort:(bool)arg1;
- (void)setShouldFailIfAccountNotYetSynced:(bool)arg1;
- (void)setSortOrder:(long long)arg1;
- (void)setUnifyResults:(bool)arg1;
- (bool)shouldFailIfAccountNotYetSynced;
- (unsigned long long)signpostId;
- (long long)sortOrder;
- (bool)unifyResults;

@end