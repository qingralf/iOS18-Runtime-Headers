/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<id<NSItemProviderWriting>> { 
        void *m_ptr; 
    }  _representingObject;
}

@property (nonatomic, readonly) NSData *dataForClient; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSItemProviderWriting> *representingObject;
@property (nonatomic, readonly) <NSItemProviderWriting> *representingObjectForClient; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *typeIdentifierForClient; /* unknown property attribute: ? */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)registerItemProvider:(id)arg1;
- (id)representingObject;
- (id)representingObjectForClient;

@end
