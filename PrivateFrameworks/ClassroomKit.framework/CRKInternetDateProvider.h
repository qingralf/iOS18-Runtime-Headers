/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKInternetDateProvider : NSObject <CRKInternetDateFetching, NSURLSessionDataDelegate> {
    NSMutableDictionary * _completionHandlerTable;
    NSURLSession * _session;
}

@property (nonatomic, retain) NSMutableDictionary *completionHandlerTable;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3;
- (id)completionHandlerTable;
- (void)fetchInternetDateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)internetDateRequestDidReceiveTask:(id)arg1;
- (id)session;
- (void)setCompletionHandlerTable:(id)arg1;
- (void)setSession:(id)arg1;
- (void)storeCompletionHandler:(id /* block */)arg1 forTask:(id)arg2;

@end
