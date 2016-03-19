using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{

	public class SqlTransformer_0 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				System.String col_RatingLine = row.Get<System.String>(0);
				output.Set(0, new SqlArray<string>( col_RatingLine.Split(new string[]{"::"}, StringSplitOptions.None)));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"new SqlArray<string>(            RatingLine.Split(new string[]{""::""}, StringSplitOptions.None))",
		};
	}


	public class SqlTransformer_1 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				Microsoft.Analytics.Types.Sql.SqlArray<System.String> col_Ratings = row.Get<Microsoft.Analytics.Types.Sql.SqlArray<System.String>>(0);
				output.Set(0, int.Parse(col_Ratings[0]));
				exceptionIndex++;
				output.Set(1, int.Parse(col_Ratings[1]));
				exceptionIndex++;
				output.Set(2, int.Parse(col_Ratings[2]));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"int.Parse(Ratings[0])",
			@"int.Parse(Ratings[1])",
			@"int.Parse(Ratings[2])",
		};
	}




	public class SqlTransformer_8 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				System.String col_UserLine = row.Get<System.String>(0);
				output.Set(0, new SqlArray<string>( col_UserLine.Split(new string[]{"::"}, StringSplitOptions.None)));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"new SqlArray<string>(            UserLine.Split(new string[]{""::""}, StringSplitOptions.None))",
		};
	}


	public class SqlTransformer_9 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				Microsoft.Analytics.Types.Sql.SqlArray<System.String> col_UserArr = row.Get<Microsoft.Analytics.Types.Sql.SqlArray<System.String>>(0);
				output.Set(0, int.Parse(col_UserArr[0]));
				exceptionIndex++;
				output.Set(1, int.Parse(col_UserArr[2]));
				exceptionIndex++;
				output.Set(2, int.Parse(col_UserArr[3]));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"int.Parse(UserArr[0])",
			@"int.Parse(UserArr[2])",
			@"int.Parse(UserArr[3])",
		};
	}


	public class SqlTransformer_14 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				System.Int32 col_aUserID = row.Get<System.Int32>(0);
				System.Int32 col_bUserID = row.Get<System.Int32>(1);
				System.Int32 col_Rating = row.Get<System.Int32>(2);
				System.Int32 col_Rating3 = row.Get<System.Int32>(3);
				output.Set(0, Math.Pow(col_Rating, 2));
				exceptionIndex++;
				output.Set(1, Math.Pow(col_Rating3, 2));
				exceptionIndex++;
				output.Set(2, col_aUserID);
				exceptionIndex++;
				output.Set(3, col_bUserID);
				exceptionIndex++;
				output.Set(4, col_Rating);
				exceptionIndex++;
				output.Set(5, col_Rating3);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"Math.Pow(Rating, 2)",
			@"Math.Pow(Rating3, 2)",
			@"aUserID",
			@"bUserID",
			@"Rating",
			@"Rating3",
		};
	}




	public class SqlTransformer_18 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				System.Int32 col_aUserID = row.Get<System.Int32>(0);
				System.Int32 col_bUserID = row.Get<System.Int32>(1);
				System.Int64? col_r1 = row.Get<System.Int64?>(2);
				System.Double? col_SumASquared = row.Get<System.Double?>(3);
				System.Double? col_SumBSquared = row.Get<System.Double?>(4);
				output.Set(0, (double)col_r1 / (Math.Sqrt((double)col_SumASquared) * Math.Sqrt((double)col_SumBSquared)));
				exceptionIndex++;
				output.Set(1, col_aUserID);
				exceptionIndex++;
				output.Set(2, col_bUserID);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"(double)r1 / (Math.Sqrt((double)SumASquared) * Math.Sqrt((double)SumBSquared))",
			@"aUserID",
			@"bUserID",
		};
	}


	public class SqlTransformer_22 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				System.Int32 col_aUserID = row.Get<System.Int32>(0);
				System.Double col_Similarity = row.Get<System.Double>(1);
				System.Int64? col_AvgRating = row.Get<System.Int64?>(2);
				System.Int32 col_MovieID1 = row.Get<System.Int32>(3);
				output.Set(0, col_aUserID);
				exceptionIndex++;
				output.Set(1, (col_Similarity.ToString("0.0000") + "," + col_AvgRating.ToString() + "," + col_MovieID1.ToString()));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"aUserID",
			@"(Similarity.ToString(""0.0000"") + "","" + AvgRating.ToString() + "","" + MovieID1.ToString())",
		};
	}




	public class SqlFilterTransformer_25 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			System.String col_RatingLine = row.Get<System.String>(0);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					Microsoft.Analytics.Types.Sql.SqlArray<System.String> tmp_0 = new SqlArray<string>( col_RatingLine.Split(new string[]{"::"}, StringSplitOptions.None));
					exceptionIndex++;
					output.Set<System.Int32>(0, (int.Parse(tmp_0[0])));
					exceptionIndex++;
					output.Set<System.Int32>(1, (int.Parse(tmp_0[1])));
					exceptionIndex++;
					output.Set<System.Int32>(2, (int.Parse(tmp_0[2])));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"new SqlArray<string>(            RatingLine.Split(new string[]{""::""}, StringSplitOptions.None))",
			@"int.Parse(tmp_0[0])",
			@"int.Parse(tmp_0[1])",
			@"int.Parse(tmp_0[2])",
		};
	}


	public class SqlFilterTransformer_29 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			System.String col_UserLine = row.Get<System.String>(0);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					Microsoft.Analytics.Types.Sql.SqlArray<System.String> tmp_0 = new SqlArray<string>( col_UserLine.Split(new string[]{"::"}, StringSplitOptions.None));
					exceptionIndex++;
					output.Set<System.Int32>(0, (int.Parse(tmp_0[0])));
					exceptionIndex++;
					output.Set<System.Int32>(1, (int.Parse(tmp_0[2])));
					exceptionIndex++;
					output.Set<System.Int32>(2, (int.Parse(tmp_0[3])));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"new SqlArray<string>(            UserLine.Split(new string[]{""::""}, StringSplitOptions.None))",
			@"int.Parse(tmp_0[0])",
			@"int.Parse(tmp_0[2])",
			@"int.Parse(tmp_0[3])",
		};
	}


	public class SqlFilterTransformer_33 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			System.Int32 col_aUserID = row.Get<System.Int32>(0);
			System.Int32 col_bUserID = row.Get<System.Int32>(1);
			System.Int32 col_Rating = row.Get<System.Int32>(2);
			System.Int32 col_Rating3 = row.Get<System.Int32>(3);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.Set<System.Int32>(0, (col_aUserID));
					exceptionIndex++;
					output.Set<System.Int32>(1, (col_bUserID));
					exceptionIndex++;
					output.Set<System.Int64?>(2, ((long?)(col_Rating * col_Rating3)));
					exceptionIndex++;
					output.Set<System.Double?>(3, ((double?)(Math.Pow(col_Rating, 2))));
					exceptionIndex++;
					output.Set<System.Double?>(4, ((double?)(Math.Pow(col_Rating3, 2))));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"aUserID",
			@"bUserID",
			@"(long?)(Rating * Rating3)",
			@"(double?)(Math.Pow(Rating, 2))",
			@"(double?)(Math.Pow(Rating3, 2))",
		};
	}


	public class SqlFilterTransformer_34 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			System.Int32 col_aUserID = row.Get<System.Int32>(0);
			System.Int32 col_bUserID = row.Get<System.Int32>(1);
			System.Int64? col_partialagg4__ = row.Get<System.Int64?>(2);
			System.Double? col_partialagg5__ = row.Get<System.Double?>(3);
			System.Double? col_partialagg6__ = row.Get<System.Double?>(4);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					double tmp_0 = (double)col_partialagg4__ / (Math.Sqrt((double)col_partialagg5__) * Math.Sqrt((double)col_partialagg6__));
					exceptionIndex++;
					if (tmp_0 < 1 && tmp_0 >= .95)
					{
						exceptionIndex++;
						bPicked = true;
						output.Set<System.Double>(0, (tmp_0));
						exceptionIndex++;
						output.Set<System.Int32>(1, (col_aUserID));
						exceptionIndex++;
						output.Set<System.Int32>(2, (col_bUserID));
						exceptionIndex++;
					}
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"(double)partialagg4__ / (Math.Sqrt((double)partialagg5__) * Math.Sqrt((double)partialagg6__))",
			@"tmp_0 < 1 && tmp_0 >= .95",
			@"tmp_0",
			@"aUserID",
			@"bUserID",
		};
	}


	public class SqlFilterTransformer_38 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			System.Int32 col_aUserID = row.Get<System.Int32>(0);
			System.Double col_Similarity = row.Get<System.Double>(1);
			System.Int64? col_AvgRating = row.Get<System.Int64?>(2);
			System.Int32 col_MovieID1 = row.Get<System.Int32>(3);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.Set<System.Int32>(0, (col_aUserID));
					exceptionIndex++;
					output.Set<System.String>(1, ((col_Similarity.ToString("0.0000") + "," + col_AvgRating.ToString() + "," + col_MovieID1.ToString())));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"aUserID",
			@"(Similarity.ToString(""0.0000"") + "","" + AvgRating.ToString() + "","" + MovieID1.ToString())",
		};
	}





































































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_1()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_25();
		}
		public static string Name_Process_1 = "___Scope_Generated_Classes___.SqlFilterTransformer_25";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_9()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_29();
		}
		public static string Name_Process_9 = "___Scope_Generated_Classes___.SqlFilterTransformer_29";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_16()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_33();
		}
		public static string Name_Process_16 = "___Scope_Generated_Classes___.SqlFilterTransformer_33";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_20()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_34();
		}
		public static string Name_Process_20 = "___Scope_Generated_Classes___.SqlFilterTransformer_34";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_29()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_38();
		}
		public static string Name_Process_29 = "___Scope_Generated_Classes___.SqlFilterTransformer_38";
	}
}
