/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMovePersonActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer> {
    void destinationManualOrder;
    void destinationType;
    void sourcePeople;
}

@property (nonatomic) long long destinationManualOrder;
@property (nonatomic) long long destinationType;
@property (nonatomic, copy) NSArray *sourcePeople;

+ (bool)canPerformOn:(id)arg1;
+ (id)localizedTitleForPerson:(id)arg1;
+ (id)systemImageNameForPerson:(id)arg1;

- (void).cxx_destruct;
- (long long)destinationManualOrder;
- (long long)destinationType;
- (id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3;
- (void)performBackgroundTask;
- (void)setDestinationManualOrder:(long long)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setSourcePeople:(id)arg1;
- (id)sourcePeople;

@end