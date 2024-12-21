/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
 */

@interface FIChildrenIterator : NSObject <FINodeIterator> {
    NSArray * _children;
    bool  _fullyPopulated;
    bool  _includeInvisible;
    unsigned long long  _index;
}

@property (nonatomic, copy) NSArray *children;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (nonatomic, readonly) bool fullyPopulated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeInvisible;
@property (nonatomic) unsigned long long index;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)children;
- (unsigned long long)estimatedSize;
- (id)first;
- (bool)fullyPopulated;
- (bool)includeInvisible;
- (unsigned long long)index;
- (id)initWithChildren:(id)arg1 fullyPopulated:(bool)arg2 options:(unsigned int)arg3;
- (id)next;
- (void)setChildren:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end