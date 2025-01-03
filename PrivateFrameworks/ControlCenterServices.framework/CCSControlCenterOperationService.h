/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSControlCenterOperationService : NSObject {
    <CCSControlCenterOperationServiceDelegate> * _delegate;
}

@property (nonatomic) <CCSControlCenterOperationServiceDelegate> *delegate;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleControlCenterOperationType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)handleIconElementRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestIconElementState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetToDefaultLayoutWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
