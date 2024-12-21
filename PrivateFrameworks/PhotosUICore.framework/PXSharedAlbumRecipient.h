/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumRecipient : PXRecipient <PLSSharedAlbumRecipient> {
    NSString * _fullName;
    PLCloudSharedAlbumInvitationRecord * _invitationRecord;
    NSString * _personID;
    int  _state;
}

@property (nonatomic, readonly) NSArray *allEmailsArray;
@property (nonatomic, readonly) NSArray *allPhonesArray;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayAddress;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *stateDescription;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allEmailsArray;
- (id)allPhonesArray;
- (id)description;
- (id)displayAddress;
- (id)displayName;
- (id)fullName;
- (id)initWithInvitationRecord:(id)arg1;
- (id)initWithPersonID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 state:(int)arg7;
- (id)invitationRecord;
- (id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3;
- (id)personID;
- (int)state;
- (id)stateDescription;
- (id)stateNumber;

@end