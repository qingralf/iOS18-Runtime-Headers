/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWWebViewConfigurationFactory : NSObject <SWWebViewConfigurationFactory> {
    WKProcessPool * _processPool;
    WKWebsiteDataStore * _websiteDataStore;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKProcessPool *processPool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebsiteDataStore *websiteDataStore;

- (void).cxx_destruct;
- (id)createWebViewConfigurationWithUserContentController:(id)arg1 mediaSettings:(id)arg2;
- (id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2;
- (id)processPool;
- (id)websiteDataStore;

@end