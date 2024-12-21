/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSTemplateIconCacheRecord : NSObject {
    bool  _canSaveToDisk;
    NSString * _host;
    NSURL * _templateIconURL;
    UIColor * _themeColor;
}

@property (nonatomic, readonly) bool canSaveToDisk;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly, copy) NSURL *templateIconURL;
@property (nonatomic, readonly) UIColor *themeColor;

- (void).cxx_destruct;
- (bool)canSaveToDisk;
- (id)host;
- (id)initWithHost:(id)arg1 templateIconURL:(id)arg2 themeColor:(id)arg3 canSaveToDisk:(bool)arg4;
- (id)templateIconURL;
- (id)themeColor;

@end