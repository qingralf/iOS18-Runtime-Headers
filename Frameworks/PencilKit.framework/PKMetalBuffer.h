/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalBuffer : NSObject <PKMetalResource> {
    _Atomic int  _isPurged;
    unsigned long long  _lockCount;
    <MTLBuffer> * _metalBuffer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)isPurged;
- (bool)lock;
- (void)unlock;

@end
