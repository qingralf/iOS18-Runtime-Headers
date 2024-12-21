/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVContentKeyGroup : NSObject <WebAVContentKeyGrouping> {
    struct WeakObjCPtr<AVContentKeySession> { 
        id m_weakReference; 
    }  _contentKeySession;
    struct WeakPtr<WebCore::ContentKeyGroupDataSource, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _dataSource;
    struct RetainPtr<NSUUID> { 
        void *m_ptr; 
    }  _groupIdentifier;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*logChannel;
@property (nonatomic, readonly) const void*logIdentifier;
@property (nonatomic, readonly) const void*loggerPtr;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)associateContentKeyRequest:(id)arg1;
- (id)contentProtectionSessionIdentifier;
- (void)expire;
- (id)initWithContentKeySession:(id)arg1 dataSource:(void*)arg2;
- (struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*)logChannel;
- (const void*)logIdentifier;
- (const void*)loggerPtr;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;

@end