/* Generated by RuntimeBrowser.
 */

@protocol KTIDStaticKeyStoreProtocol <NSObject>

@required

- (bool)addMapping:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id*)arg3;
- (bool)addStaticKeyEntry:(KTAccountPublicID *)arg1 contactServerPath:(NSString *)arg2 contactIdentifier:(NSString *)arg3 error:(id*)arg4;
- (KTIDStaticKeyStoreEntry *)findByContact:(CNContact *)arg1 error:(id*)arg2;
- (KTIDStaticKeyStoreEntry *)findByContactIdentifier:(NSString *)arg1 error:(id*)arg2;
- (KTIDStaticKeyStoreEntry *)findByIdentifier:(KTAccountPublicID *)arg1 error:(id*)arg2;
- (KTIDStaticKeyStoreEntry *)findKeyByContactsServerPath:(NSString *)arg1 contactIdentifier:(NSString *)arg2 error:(id*)arg3;
- (KTIDStaticKeyStoreEntry *)findKeyByHandle:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)listKTID:(id*)arg1;
- (NSArray *)mappings:(KTAccountPublicID *)arg1 error:(id*)arg2;
- (bool)removeEntryByContact:(CNContact *)arg1 error:(id*)arg2;
- (bool)removeEntryByContactIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)removeEntryByKDID:(KTAccountPublicID *)arg1 error:(id*)arg2;
- (bool)removeMapping:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id*)arg3;
- (bool)resetCloudKit:(id*)arg1;
- (bool)setContactServerPath:(NSString *)arg1 forKTId:(KTAccountPublicID *)arg2 error:(id*)arg3;
- (bool)setErrorCode:(int)arg1 forMapping:(NSString *)arg2 error:(id*)arg3;
- (bool)setupCloudSchema:(bool)arg1 error:(id*)arg2;
- (bool)triggerSync:(id*)arg1;
- (bool)updateStaticKeyEntry:(KTAccountPublicID *)arg1 contact:(CNContact *)arg2 error:(id*)arg3;
- (bool)updateStaticKeyEntry:(KTAccountPublicID *)arg1 contactServerPath:(NSString *)arg2 contactIdentifier:(NSString *)arg3 mappings:(NSArray *)arg4 error:(id*)arg5;
- (KTIDStaticKeyStoreEntry *)validateByContact:(CNContact *)arg1 error:(id*)arg2;
- (KTIDStaticKeyStoreEntry *)validateByContactIdentifier:(NSString *)arg1 error:(id*)arg2;
- (KTIDStaticKeyStoreEntry *)validateByIdentifier:(KTAccountPublicID *)arg1 error:(id*)arg2;

@end