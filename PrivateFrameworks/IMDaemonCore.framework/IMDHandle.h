/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDHandle : NSObject <IMHandle> {
    NSString * _CNContactID;
    NSString * _countryCode;
    NSString * _id;
    NSString * _personCentricID;
    NSString * _unformattedID;
}

@property (nonatomic, copy) NSString *CNContactID;
@property (nonatomic, retain) NSString *ID;
@property (nonatomic, readonly) bool cachedOffGridMode;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly, retain) NSDictionary *handleInfo;
@property (nonatomic, readonly) bool matchesLoginHandleForAnyAccount;
@property (nonatomic, readonly) NSString *normalizedID;
@property (nonatomic, retain) NSString *personCentricID;
@property (nonatomic, retain) NSString *unformattedID;

- (id)CNContactID;
- (id)ID;
- (bool)cachedOffGridMode;
- (void)cachedOffGridModeAndLastPublisherWithCompletion:(id /* block */)arg1;
- (long long)compareIDs:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)handleInfo;
- (unsigned long long)hash;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4;
- (bool)isBetterDefinedThan:(id)arg1;
- (bool)isBusiness;
- (bool)isEqual:(id)arg1;
- (void)isOffGridModeWithCompletion:(id /* block */)arg1;
- (bool)isStewie;
- (bool)matchesLoginHandleForAnyAccount;
- (id)normalizedID;
- (id)personCentricID;
- (void)setCNContactID:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setID:(id)arg1;
- (void)setPersonCentricID:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)unformattedID;

@end