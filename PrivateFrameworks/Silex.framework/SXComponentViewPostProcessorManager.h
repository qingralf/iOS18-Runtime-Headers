/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager> {
    NSMutableArray * _processors;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *processors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcessor:(id)arg1;
- (id)init;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)processors;
- (void)removeProcessor:(id)arg1;

@end
