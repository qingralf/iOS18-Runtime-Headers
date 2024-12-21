/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSLPLinkMetadataInfo : NSObject {
    NSDate * _lastFetchDate;
    bool  _lastFetchDidSucceed;
    bool  _metadataHasImage;
    NSString * _urlString;
    NSString * _uuidString;
}

@property (nonatomic, readonly, copy) NSDate *lastFetchDate;
@property (nonatomic, readonly) bool lastFetchDidSucceed;
@property (nonatomic, readonly) bool metadataHasImage;
@property (nonatomic, readonly, copy) NSString *urlString;
@property (nonatomic, readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)copyWithoutUUID;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1 uuidString:(id)arg2 lastFetchDate:(id)arg3 lastFetchDidSucceed:(bool)arg4 metadataHasImage:(bool)arg5;
- (bool)isMetadataCached;
- (id)lastFetchDate;
- (bool)lastFetchDidSucceed;
- (bool)metadataHasImage;
- (id)urlString;
- (id)uuidString;

@end