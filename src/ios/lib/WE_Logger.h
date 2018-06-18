@interface WE_Logger : NSObject

@property (nonatomic) BOOL enabled;

-(void)init;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)getEnabled;
-(void)error:(NSString*)msg;
-(void)warn:(NSString*)msg;
-(void)info:(NSString*)msg;
-(void)debug:(NSString*)msg;
-(void)verbose:(NSString*)msg;

@end