/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQueryCursor : NSObject {
    unsigned long long  _blobBytesWritten;
    unsigned long long  _blobLength;
    NSMutableSet * _contactIdentifiers;
    int  _contactLinkUUIDColumn;
    int  _contactPreferredForImageColumn;
    long long  _countOfContactsInBuffer;
    long long  _currentMultivalue;
    int  _currentMultivalueIdentifier;
    int  _currentPropertyID;
    int  _currentRecordID;
    NSData * _currentRecordIndividualUniqueIDAuditData;
    NSData * _currentRecordLinkedUniqueIDAuditData;
    bool  _hasFoundAnyImageDataForCurrentContact;
    struct sqlite3_blob { } * _incompleteBlob;
    CNManagedConfiguration * _managedConfiguration;
    NSMutableDictionary * _matchInfo;
    unsigned long long  _maxBufferSize;
    long long  _maxContactsPerBatch;
    int  _multivalueEntryKeyColumn;
    int  _multivalueEntryValueColumn;
    int  _multivalueIdentifierColumn;
    int  _multivalueLabelColumn;
    int  _multivaluePropertyIDColumn;
    int  _multivalueUUIDColumn;
    int  _multivalueValueColumn;
    NSMutableData * _mutableData;
    int  _personLinkColumn;
    ABBufferQuery * _query;
    long long  _resumeToken;
}

@property (nonatomic) unsigned long long blobBytesWritten;
@property (nonatomic) unsigned long long blobLength;
@property (nonatomic, retain) NSMutableSet *contactIdentifiers;
@property (nonatomic) int contactLinkUUIDColumn;
@property (nonatomic) int contactPreferredForImageColumn;
@property (nonatomic) long long countOfContactsInBuffer;
@property (nonatomic) long long currentMultivalue;
@property (nonatomic) int currentMultivalueIdentifier;
@property (nonatomic) int currentPropertyID;
@property (nonatomic) int currentRecordID;
@property (nonatomic, retain) NSData *currentRecordIndividualUniqueIDAuditData;
@property (nonatomic, retain) NSData *currentRecordLinkedUniqueIDAuditData;
@property (nonatomic) bool hasFoundAnyImageDataForCurrentContact;
@property (nonatomic) struct sqlite3_blob { }*incompleteBlob;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, retain) NSMutableDictionary *matchInfo;
@property (nonatomic) unsigned long long maxBufferSize;
@property (nonatomic) long long maxContactsPerBatch;
@property (nonatomic) int multivalueEntryKeyColumn;
@property (nonatomic) int multivalueEntryValueColumn;
@property (nonatomic) int multivalueIdentifierColumn;
@property (nonatomic) int multivalueLabelColumn;
@property (nonatomic) int multivaluePropertyIDColumn;
@property (nonatomic) int multivalueUUIDColumn;
@property (nonatomic) int multivalueValueColumn;
@property (nonatomic, retain) NSMutableData *mutableData;
@property (nonatomic) int personLinkColumn;
@property (nonatomic, readonly) ABBufferQuery *query;
@property (nonatomic) long long resumeToken;

- (unsigned long long)blobBytesWritten;
- (unsigned long long)blobLength;
- (id)contactIdentifiers;
- (int)contactLinkUUIDColumn;
- (int)contactPreferredForImageColumn;
- (long long)countOfContactsInBuffer;
- (long long)currentMultivalue;
- (int)currentMultivalueIdentifier;
- (int)currentPropertyID;
- (int)currentRecordID;
- (id)currentRecordIndividualUniqueIDAuditData;
- (id)currentRecordLinkedUniqueIDAuditData;
- (void)dealloc;
- (void)fetchNextBatchWithReply:(id /* block */)arg1;
- (bool)hasFoundAnyImageDataForCurrentContact;
- (struct sqlite3_blob { }*)incompleteBlob;
- (id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 propertyIdentifierSet:(struct __CFSet { }*)arg3 includeLinkedContacts:(bool)arg4 sortOrder:(unsigned int)arg5 suggestedContactsPerBatch:(long long)arg6 managedConfiguration:(id)arg7 identifierAuditMode:(long long)arg8 authorizationContext:(id)arg9;
- (id)initWithQuery:(id)arg1 batchSize:(long long)arg2;
- (id)managedConfiguration;
- (id)matchInfo;
- (unsigned long long)maxBufferSize;
- (long long)maxContactsPerBatch;
- (int)multivalueEntryKeyColumn;
- (int)multivalueEntryValueColumn;
- (int)multivalueIdentifierColumn;
- (int)multivalueLabelColumn;
- (int)multivaluePropertyIDColumn;
- (int)multivalueUUIDColumn;
- (int)multivalueValueColumn;
- (id)mutableData;
- (int)personLinkColumn;
- (id)query;
- (long long)resumeToken;
- (void)setBlobBytesWritten:(unsigned long long)arg1;
- (void)setBlobLength:(unsigned long long)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setContactLinkUUIDColumn:(int)arg1;
- (void)setContactPreferredForImageColumn:(int)arg1;
- (void)setCountOfContactsInBuffer:(long long)arg1;
- (void)setCurrentMultivalue:(long long)arg1;
- (void)setCurrentMultivalueIdentifier:(int)arg1;
- (void)setCurrentPropertyID:(int)arg1;
- (void)setCurrentRecordID:(int)arg1;
- (void)setCurrentRecordIndividualUniqueIDAuditData:(id)arg1;
- (void)setCurrentRecordLinkedUniqueIDAuditData:(id)arg1;
- (void)setHasFoundAnyImageDataForCurrentContact:(bool)arg1;
- (void)setIncompleteBlob:(struct sqlite3_blob { }*)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setMaxBufferSize:(unsigned long long)arg1;
- (void)setMaxContactsPerBatch:(long long)arg1;
- (void)setMultivalueEntryKeyColumn:(int)arg1;
- (void)setMultivalueEntryValueColumn:(int)arg1;
- (void)setMultivalueIdentifierColumn:(int)arg1;
- (void)setMultivalueLabelColumn:(int)arg1;
- (void)setMultivaluePropertyIDColumn:(int)arg1;
- (void)setMultivalueUUIDColumn:(int)arg1;
- (void)setMultivalueValueColumn:(int)arg1;
- (void)setMutableData:(id)arg1;
- (void)setPersonLinkColumn:(int)arg1;
- (void)setResumeToken:(long long)arg1;

@end
