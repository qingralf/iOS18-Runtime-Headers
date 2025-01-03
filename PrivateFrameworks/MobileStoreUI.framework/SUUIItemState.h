/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIItemState : NSObject <NSCopying> {
    unsigned long long  _downloadContentFlags;
    NSArray * _downloadIdentifiers;
    NSString * _downloadPhase;
    float  _downloadProgress;
    NSNumber * _itemIdentifier;
    unsigned long long  _libraryContentFlags;
    long long  _mediaCategory;
    unsigned long long  _state;
    SUUIStoreIdentifier * _storeIdentifier;
    NSString * _variantIdentifier;
}

@property (nonatomic, readonly) bool activeStateIsPreview;
@property (nonatomic, readonly) unsigned long long allContentFlags;
@property (nonatomic) unsigned long long downloadContentFlags;
@property (nonatomic, copy) NSArray *downloadIdentifiers;
@property (nonatomic, copy) NSString *downloadPhase;
@property (nonatomic) float downloadProgress;
@property (nonatomic, copy) NSNumber *itemIdentifier;
@property (nonatomic) unsigned long long libraryContentFlags;
@property (nonatomic) long long mediaCategory;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) SUUIStoreIdentifier *storeIdentifier;
@property (nonatomic, copy) NSString *variantIdentifier;

- (void).cxx_destruct;
- (bool)activeStateIsPreview;
- (unsigned long long)allContentFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadContentFlags;
- (id)downloadIdentifiers;
- (id)downloadPhase;
- (float)downloadProgress;
- (id)itemIdentifier;
- (unsigned long long)libraryContentFlags;
- (long long)mediaCategory;
- (void)setDownloadContentFlags:(unsigned long long)arg1;
- (void)setDownloadIdentifiers:(id)arg1;
- (void)setDownloadPhase:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLibraryContentFlags:(unsigned long long)arg1;
- (void)setMediaCategory:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (unsigned long long)state;
- (id)storeIdentifier;
- (id)variantIdentifier;

@end
