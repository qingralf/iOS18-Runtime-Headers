/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTableAttachmentProvider : NSObject {
    ICAttachment * _attachment;
    ICAttachment * _backgroundAttachment;
    <ICTableAttachmentProviderDelegate> * _delegate;
    bool  _needsToUpdateTableFromBackgroundAttachment;
    NSManagedObjectContext * _overriddenBackgroundMOC;
    ICTable * _table;
    ICCRTTCompatibleDocument * _tableDoc;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic, retain) ICAttachment *backgroundAttachment;
@property (nonatomic) <ICTableAttachmentProviderDelegate> *delegate;
@property (nonatomic) bool isBeingEditedLocallyOnDevice;
@property (nonatomic) bool needsToUpdateTableFromBackgroundAttachment;
@property (nonatomic) NSManagedObjectContext *overriddenBackgroundMOC;
@property (nonatomic, readonly) ICTable *table;
@property (nonatomic, readonly) ICCRTTCompatibleDocument *tableDoc;

+ (id)defaultBackgroundManagedObjectContext;
+ (id)mergeNotificationRegister;
+ (void)notifyProviderForRefreshToAttachment:(id)arg1;
+ (id)providerMapping;
+ (void)saveAttachmentOnMainThread:(id)arg1;
+ (id)sharedProviderForAttachment:(id)arg1;

- (void).cxx_destruct;
- (id)attachment;
- (id)backgroundAttachment;
- (id)backgroundManagedObjectContext;
- (id)delegate;
- (void)didRefreshBackgroundTableAttachment:(id)arg1;
- (bool)isBeingEditedLocallyOnDevice;
- (bool)needsToUpdateTableFromBackgroundAttachment;
- (void)notifyDelegateTableAttachmentDidMerge;
- (void)notifyDelegateTableAttachmentWillMerge;
- (id)overriddenBackgroundMOC;
- (void)refreshBackgroundAttachment;
- (void)setAttachment:(id)arg1;
- (void)setBackgroundAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsBeingEditedLocallyOnDevice:(bool)arg1;
- (void)setNeedsToUpdateTableFromBackgroundAttachment:(bool)arg1;
- (void)setOverriddenBackgroundMOC:(id)arg1;
- (void)setTableFromDocument:(id)arg1;
- (id)table;
- (id)tableDoc;
- (void)updateTableFromMOC;

@end
