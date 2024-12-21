/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GESS.framework/GESS
 */

@interface GESSAlgVertexClusterSimplifyExtended : GESSAlgBase {
    NSMutableData * _clusterCenterColors;
    NSMutableData * _clusterCenterNormals;
    NSMutableData * _clusterCenterPositions;
    GESSAlgVertexClusterSimplifyOptions * _options;
}

- (void).cxx_destruct;
- (id)returnClusterCenterColors;
- (id)returnClusterCenterNormals;
- (id)returnClusterCenterPositions;
- (bool)run:(id)arg1;
- (void)setOptions:(id)arg1;

@end