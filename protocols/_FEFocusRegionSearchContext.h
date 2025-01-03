/* Generated by RuntimeBrowser.
 */

@protocol _FEFocusRegionSearchContext <NSObject>

@required

- (void)addRegion:(_FEFocusRegion *)arg1;
- (void)addRegions:(NSArray *)arg1;
- (void)addRegionsInContainer:(id <_FEFocusRegionContainer>)arg1;
- (void)addRegionsInContainers:(NSArray *)arg1;
- (<_FECoordinateSpace> *)coordinateSpace;
- (_FEFocusSystem *)focusSystem;
- (void)markContainerAsProvidingDynamicContent;
- (_FEFocusMovementInfo *)movementInfo;
- (<_FEFocusMapArea> *)searchArea;
- (_FEFocusSearchInfo *)searchInfo;

@end
