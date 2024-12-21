/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICCloudClientCollaborationEditParams : NSObject <NSSecureCoding> {
    unsigned long long  _itemAdamID;
    NSString * _itemPositionUUID;
    NSString * _itemUUID;
    long long  _positionType;
    NSString * _reactionString;
    NSString * _referencePositionUUID;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long itemAdamID;
@property (nonatomic, readonly, copy) NSString *itemPositionUUID;
@property (nonatomic, readonly, copy) NSString *itemUUID;
@property (nonatomic, readonly) long long positionType;
@property (nonatomic, copy) NSString *reactionString;
@property (nonatomic, readonly, copy) NSString *referencePositionUUID;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) long long type;

+ (id)descriptionForPositionType:(long long)arg1;
+ (id)newIdentifierString;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)arg1 itemUUID:(id)arg2 itemPositionUUID:(id)arg3 afterReferencePositionUUD:(id)arg4;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)arg1 itemUUID:(id)arg2 itemPositionUUID:(id)arg3 atPosition:(long long)arg4;
+ (id)paramsForMovingTrackWithItemUUID:(id)arg1 withNewItemPositionUUID:(id)arg2 afterReferencePositionUUD:(id)arg3;
+ (id)paramsForMovingTrackWithItemUUID:(id)arg1 withNewItemPositionUUID:(id)arg2 toPosition:(long long)arg3;
+ (id)paramsForRemovingTrackWithItemUUID:(id)arg1;
+ (id)paramsForSettingReaction:(id)arg1 onTrackWithItemUUID:(id)arg2;
+ (id)paramsForUnsettingReaction:(id)arg1 onTrackWithItemUUID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemAdamID;
- (id)itemPositionUUID;
- (id)itemUUID;
- (long long)positionType;
- (id)reactionString;
- (id)referencePositionUUID;
- (void)setReactionString:(id)arg1;
- (id)timestamp;
- (long long)type;

@end