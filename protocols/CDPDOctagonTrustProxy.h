/* Generated by RuntimeBrowser.
 */

@protocol CDPDOctagonTrustProxy <NSObject>

@required

+ (bool)octagonIsSOSFeatureEnabled;

- (bool)cacheRecoveryKey:(NSString *)arg1 forAltDSID:(NSString *)arg2 error:(id*)arg3;
- (CDPContext *)cdpContext;
- (bool)disableRecoveryKey:(id*)arg1;
- (void)fetchAllEscrowRecords:(void *)arg1 forceFetch:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchAllEscrowRecords:(void *)arg1 source:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchEscrowRecords:(void *)arg1 forceFetch:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchEscrowRecords:(void *)arg1 source:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (id)initWithContext:(CDPContext *)arg1;
- (bool)isRecoveryKeySet:(OTConfigurationContext *)arg1 error:(id*)arg2;
- (bool)registerRecoveryKey:(NSString *)arg1 error:(id*)arg2;
- (void)setCdpContext:(CDPContext *)arg1;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 error:(id*)arg3;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 source:(long long)arg3 error:(id*)arg4;

@end