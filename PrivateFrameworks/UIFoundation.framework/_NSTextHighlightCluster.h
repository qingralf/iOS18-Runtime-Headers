/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSTextHighlightCluster : NSObject {
    NSMapTable * _bottomBordersOfRuns;
    NSMutableArray * _runs;
    NSTextHighlightShapeProvider * _shapeProvider;
    NSMapTable * _topBordersOfRuns;
}

- (void).cxx_destruct;
- (void)accessBorderDict:(id)arg1 forKey:(double)arg2 usingBlock:(id /* block */)arg3;
- (void)addToBorderDict:(id)arg1 key:(double)arg2 object:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)registerMaxYOfRun:(id)arg1;
- (void)registerMinYOfRun:(id)arg1;

@end
