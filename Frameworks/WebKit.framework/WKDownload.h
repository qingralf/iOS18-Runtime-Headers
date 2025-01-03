/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDownload : NSObject <NSProgressReporting, WKObject> {
    struct WeakObjCPtr<id<WKDownloadDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::DownloadProxy> { 
        struct type { 
            unsigned char __lx[344]; 
        } data; 
    }  _download;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WKDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (nonatomic, readonly) WKFrameInfo *originatingFrame;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly) WKWebView *webView;

+ (bool)accessInstanceVariablesDirectly;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)cancel:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)isUserInitiated;
- (id)originalRequest;
- (id)originatingFrame;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (id)webView;

@end
