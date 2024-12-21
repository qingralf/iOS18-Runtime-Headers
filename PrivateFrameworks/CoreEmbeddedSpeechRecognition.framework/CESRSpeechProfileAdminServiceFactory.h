/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileAdminServiceFactory : NSObject <CESRSpeechProfileAdminServiceProvider> {
    NSObject<OS_dispatch_queue> * _serviceQueue;
    NSObject<CESRSpeechProfileSiteManagement> * _speechProfileSiteManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)arg1 speechProfileSiteManager:(id)arg2;

@end