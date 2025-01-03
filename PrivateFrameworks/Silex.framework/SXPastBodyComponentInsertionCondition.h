/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {
    <SXComponent> * _firstBodyComponent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstBodyComponentThreshold;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SXComponent> *firstBodyComponent;
@property (nonatomic) struct CGPoint { double x1; double x2; } firstBodyComponentThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)findFirstBodyComponentInComponents:(id)arg1;
- (id)firstBodyComponent;
- (struct CGPoint { double x1; double x2; })firstBodyComponentThreshold;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 DOMObjectProvider:(id)arg3;
- (void)setFirstBodyComponent:(id)arg1;
- (void)setFirstBodyComponentThreshold:(struct CGPoint { double x1; double x2; })arg1;
- (bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
