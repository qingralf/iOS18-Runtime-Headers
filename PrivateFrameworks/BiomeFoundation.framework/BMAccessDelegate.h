/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMAccessDelegate : NSObject <BMAccessDelegate> {
    NSDictionary * _delegates;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegates;
- (bool)handlesDirectoryCreationForResource:(id)arg1 inContainer:(id)arg2;
- (bool)handlesDirectoryRemovalForResource:(id)arg1 inContainer:(id)arg2;
- (id)initWithDelegates:(id)arg1;
- (bool)prepareResource:(id)arg1 withMode:(unsigned long long)arg2 inContainer:(id)arg3;
- (bool)teardownResource:(id)arg1 inContainer:(id)arg2;

@end