/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
 */

@interface FINodeIterator : NSObject <FINodeIterator> {
    struct OpaqueNodeIterator { } * _iterator;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (nonatomic, readonly) bool fullyPopulated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (unsigned long long)estimatedSize;
- (id)first;
- (bool)fullyPopulated;
- (id)initWithIterator:(struct OpaqueNodeIterator { }*)arg1;
- (id)next;

@end