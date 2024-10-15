buff = "Hola";

linea_sin_formar = strdup(buff);
free(buff);
buff = "que ";  // linea_sin_formar = "Hola"
linea_sin_formar = strjoin(linea_sin_formar, buff);
free(buff);
buff = "tal?";
linea_sin_formar = strjoin(llinea_sin_formar, buff);
free(buff);



buff = ".\n";
strchr analizar salto de __LINE__
linea_sin_formar = strjoin(llinea_sin_formar, buff);
linea_sin_formar = "Hola que tal?. \n"
