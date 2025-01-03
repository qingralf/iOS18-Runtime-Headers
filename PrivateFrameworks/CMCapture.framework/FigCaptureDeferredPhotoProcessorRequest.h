/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {
    NSString * _applicationID;
    NSString * _captureRequestIdentifier;
    int  _clientPID;
    BWDeferredProcessingContainer * _container;
    NSObject<OS_xpc_object> * _message;
    FigCaptureDeferredPhotoProcessorRequest * _parent;
    NSString * _photoIdentifier;
    unsigned int  _qosClass;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) int clientPID;
@property (nonatomic, retain) BWDeferredProcessingContainer *container;
@property (nonatomic, readonly) FigCaptureDeferredPhotoProcessorRequest *parent;
@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic, readonly) unsigned int qosClass;

- (id)applicationID;
- (id)captureRequestIdentifier;
- (int)clientPID;
- (id)container;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationID:(id)arg1 captureRequstIdentifier:(id)arg2 photoIdentifier:(id)arg3 clientPID:(int)arg4 message:(id)arg5 qosClass:(unsigned int)arg6 parent:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (id)photoIdentifier;
- (unsigned int)qosClass;
- (void)setContainer:(id)arg1;

@end
