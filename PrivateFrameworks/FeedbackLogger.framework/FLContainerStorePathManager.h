/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
 */

@interface FLContainerStorePathManager : NSObject {
    FeedbackLoggerFBFClient * _fbf;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _sandboxExtensionTokens;
    NSMutableDictionary * _storeIdToContainerPathMap;
    NSMutableDictionary * _storeIdToLastSandboxExtensionRequestMap;
}

@property (nonatomic, retain) FeedbackLoggerFBFClient *fbf;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, copy) NSMutableArray *sandboxExtensionTokens;
@property (nonatomic, copy) NSMutableDictionary *storeIdToContainerPathMap;
@property (nonatomic, copy) NSMutableDictionary *storeIdToLastSandboxExtensionRequestMap;

- (void).cxx_destruct;
- (id)containerPathForStoreId:(id)arg1;
- (void)dealloc;
- (id)fbf;
- (id)init;
- (id)log;
- (id)sandboxExtensionTokens;
- (void)setFbf:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setSandboxExtensionTokens:(id)arg1;
- (void)setStoreIdToContainerPathMap:(id)arg1;
- (void)setStoreIdToLastSandboxExtensionRequestMap:(id)arg1;
- (id)storeIdToContainerPathMap;
- (id)storeIdToLastSandboxExtensionRequestMap;

@end
