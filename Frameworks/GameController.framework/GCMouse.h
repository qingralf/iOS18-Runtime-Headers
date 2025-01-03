/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCMouse : NSObject <GCDevice> {
    NSObject<OS_dispatch_queue> * _handlerQueue;
    GCMouseInput * _mouseInput;
    NSString * _vendorName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GCMouseLiveInput *liveInput;
@property (nonatomic, readonly) GCMouseInput *mouseInput;
@property (nonatomic, readonly) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic, readonly) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (id)current;
+ (id)mice;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)handlerQueue;
- (id)init;
- (id)initWithName:(id)arg1 additionalButtons:(unsigned int)arg2;
- (id)liveInput;
- (id)mouseInput;
- (id)physicalInputProfile;
- (id)productCategory;
- (void)setHandlerQueue:(id)arg1;
- (id)vendorName;

@end
