/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MigrationKit.framework/MigrationKit
 */

@interface MKPUTRouter : NSObject <MKHTTPRouter> {
    <MKPUTRouterDelegate> * _delegate;
    NSDictionary * _routing;
    NSMutableArray * _supportedContentTypes;
    NSArray * _supportedTransferEncodings;
}

@property (nonatomic) <MKPUTRouterDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *supportedContentTypes;
@property (nonatomic, retain) NSArray *supportedTransferEncodings;

- (void).cxx_destruct;
- (void)_server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (id)delegate;
- (id)init;
- (bool)isAllowedPath:(id)arg1;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setSupportedContentTypes:(id)arg1;
- (void)setSupportedTransferEncodings:(id)arg1;
- (id)supportedContentTypes;
- (id)supportedTransferEncodings;

@end