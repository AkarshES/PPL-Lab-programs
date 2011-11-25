import java.util.HashMap;
import java.util.Map;
public class TypeErasure
{
	public static void main(String []args)
	{
		Map<String,String> languageMap = new HashMap<String,String>();
		languageMap.put("1954","Fortran");
		languageMap.put("1958","LISP");
		String lang = languageMap.get("1954");
		System.out.println("our fav. lang. is not "+lang);
	}
}
