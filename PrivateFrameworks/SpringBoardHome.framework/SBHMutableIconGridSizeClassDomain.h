/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHMutableIconGridSizeClassDomain : SBHIconGridSizeClassDomain {
    SBHIconGridSizeClassDomain * _fallbackDomain;
    NSMutableDictionary * _registeredClasses;
    NSMutableArray * _registeredOrder;
}

@property (nonatomic) SBHIconGridSizeClassDomain *fallbackDomain;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fallbackDomain;
- (id)initWithGridSizeClasses:(id)arg1 order:(id)arg2 fallbackDomain:(id)arg3;
- (void)registerIconGridSizeClass:(id)arg1 info:(id)arg2;
- (void)registerIconGridSizeClasses:(id)arg1;
- (id)registeredGridSizeClassOrder;
- (id)registeredGridSizeClasses;
- (void)setFallbackDomain:(id)arg1;

@end