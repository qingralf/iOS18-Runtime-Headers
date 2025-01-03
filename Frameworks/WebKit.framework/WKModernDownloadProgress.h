/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKModernDownloadProgress : NSProgress {
    struct BlockPtr<void ()>="m_block"@? {}  m_didFinishCompletionHandler;
    struct WeakPtr<WebKit::Download, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_download;
    struct RetainPtr<BEDownloadMonitor> { 
        void *m_ptr; 
    }  m_downloadMonitor;
    struct RetainPtr<BEDownloadProgress> { 
        void *m_ptr; 
    }  m_downloadProgress;
    bool  m_fileCreatedHandlerCalled;
    struct RetainPtr<NSURLSessionDownloadTask> { 
        void *m_ptr; 
    }  m_task;
    bool  m_useDownloadPlaceholder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)begin;
- (void)dealloc;
- (void)didFinish:(id /* block */)arg1;
- (id)initWithDownloadTask:(id)arg1 download:(void*)arg2 URL:(id)arg3 useDownloadPlaceholder:(bool)arg4 resumePlaceholderURL:(id)arg5 liveActivityAccessToken:(id)arg6;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performCancel;
- (void)resume:(id)arg1;
- (void)startUpdatingDownloadProgress;

@end
